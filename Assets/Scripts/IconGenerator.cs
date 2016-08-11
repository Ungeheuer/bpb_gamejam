using UnityEngine;

public static class IconGenerator {
	// pattern types
	public enum Pattern {
		MirrorDouble, 
		MirrorVertical, 
		MirrorHorizontal, 
		Flag, 
		Circles, 
		Mill,
		Painting,
		Noise
	};

	// a class you can use to save or setup settings for an icon
	[System.Serializable]
	public class IconSettings {
		public int pixelScale = 8;
		public Color baseColor = Color.white;
		public int baseColorProbability = 2;
		public bool randomOtherColors = true;
		public Color[] otherColors = new Color[]{Color.white};
		public bool multipleColors = true;
		public Pattern pattern = Pattern.MirrorDouble;
	}



	// -----------------------------------------------------------
	// ----------            SHORT METHODS           -------------
	// -----------------------------------------------------------

	public static Texture2D create(){
		Color[] otherColors = new Color[]{Color.black};
		return create (8, Color.white, 2, true, otherColors, true, Pattern.MirrorDouble);
	}

	public static Texture2D create(Pattern pattern){
		Color[] otherColors = new Color[]{Color.black};
		return create (8, Color.white, 2, true, otherColors, true, pattern);
	}

	public static Texture2D create(int pixelScale){
		Color[] otherColors = new Color[]{Color.black};
		return create (pixelScale, Color.white, 2, true, otherColors, true, Pattern.MirrorDouble);
	}

	public static Texture2D create(int pixelScale, Pattern pattern){
		Color[] otherColors = new Color[]{Color.black};
		return create (pixelScale, Color.white, 2, true, otherColors, true, pattern);
	}

	public static Texture2D create(int pixelScale, Color baseColor){
		Color[] otherColors = new Color[]{Color.black};
		return create (pixelScale, baseColor, 2, true, otherColors, true, Pattern.MirrorDouble);
	}

	public static Texture2D create(int pixelScale, Color baseColor, Pattern pattern){
		Color[] otherColors = new Color[]{Color.black};
		return create (pixelScale, baseColor, 2, true, otherColors, true, pattern);
	}

	public static Texture2D create(int pixelScale, int otherColorsCount){
		Color[] otherColors = new Color[otherColorsCount];
		return create (pixelScale, Color.white, 2, true, otherColors, true, Pattern.MirrorDouble);
	}

	public static Texture2D create(int pixelScale, int otherColorsCount, bool multipleColors){
		Color[] otherColors = new Color[otherColorsCount];
		return create (pixelScale, Color.white, 2, true, otherColors, multipleColors, Pattern.MirrorDouble);
	}

	public static Texture2D create(int pixelScale, Color baseColor, int otherColorsCount){
		Color[] otherColors = new Color[otherColorsCount];
		return create (pixelScale, baseColor, 2, true, otherColors, true, Pattern.MirrorDouble);
	}

	public static Texture2D create(int pixelScale, Color baseColor, int otherColorsCount, bool multipleColors){
		Color[] otherColors = new Color[otherColorsCount];
		return create (pixelScale, baseColor, 2, true, otherColors, multipleColors, Pattern.MirrorDouble);
	}

	public static Texture2D create(int pixelScale, Color baseColor, Color[] otherColors){
		return create (pixelScale, baseColor, 2, false, otherColors, true, Pattern.MirrorDouble);
	}

	public static Texture2D create(int pixelScale, Color baseColor, Color[] otherColors, bool multipleColors){
		return create (pixelScale, baseColor, 2, false, otherColors, multipleColors, Pattern.MirrorDouble);
	}

	public static Texture2D create(int pixelScale, Color[] otherColors){
		return create (pixelScale, Color.white, 2, false, otherColors, true, Pattern.MirrorDouble);
	}

	public static Texture2D create(int pixelScale, Color[] otherColors, bool multipleColors){
		return create (pixelScale, Color.white, 2, false, otherColors, multipleColors, Pattern.MirrorDouble);
	}

	public static Texture2D create(IconSettings iconSettings){
		return create (iconSettings.pixelScale, iconSettings.baseColor, iconSettings.baseColorProbability, 
		               iconSettings.randomOtherColors, iconSettings.otherColors, iconSettings.multipleColors, iconSettings.pattern);
	}



	// -----------------------------------------------------------
	// ----------             MAIN METHOD            -------------
	// -----------------------------------------------------------

	public static Texture2D create(int pixelScale, Color baseColor, int baseColorProbability, bool randomOtherColors, Color[] otherColors, bool multipleColors, Pattern pattern){
		if (pixelScale < 1) {
			pixelScale = 1;
		} else if (pixelScale > 2048) {
			pixelScale = 2048;
		}

		// at the moment: only multiples of 2 allowed (due to mirror mode)
		if (pixelScale % 2 == 1) {
			pixelScale ++;
		}

		// Create a new texture ARGB32 (32 bit with alpha) and no mipmaps
		Texture2D texture = new Texture2D(pixelScale, pixelScale, TextureFormat.ARGB32, false);
		texture.filterMode = FilterMode.Point;

		if (baseColorProbability < 1) {
			baseColorProbability = 1;
		}

		int singleColorID = 0;
		if (!multipleColors) {
			singleColorID = Random.Range (0, otherColors.Length);
		}

		baseColor.a = 1f; // prevent transparency
		
		if (randomOtherColors) { // generate random colors
			for (int i = 0; i < otherColors.Length; i++) {
				otherColors [i] = new HSBColor (Random.Range (0f, 1f), 1f, 1f).ToColor ();
			}
		} else { // prevent transparency
			for (int i = 0; i < otherColors.Length; i++) {
				otherColors [i].a = 1f;
			}
		}

		// create the texture depending on the pattern
		switch (pattern){
		default:
			createMirrorDouble (texture, pixelScale, baseColor, baseColorProbability, otherColors, multipleColors, singleColorID);
			break;
		case Pattern.MirrorVertical: 
			createMirrorVertical (texture, pixelScale, baseColor, baseColorProbability, otherColors, multipleColors, singleColorID);
			break;
		case Pattern.MirrorHorizontal: 
			createMirrorHorizontal (texture, pixelScale, baseColor, baseColorProbability, otherColors, multipleColors, singleColorID);
			break;
		case Pattern.Flag: 
			createFlag (texture, pixelScale, baseColor, baseColorProbability, otherColors, multipleColors, singleColorID);
			break;
		case Pattern.Circles: 
			createCircles (texture, pixelScale, baseColor, baseColorProbability, otherColors, multipleColors, singleColorID);
			break;
		case Pattern.Mill: 
			createMill (texture, pixelScale, baseColor, baseColorProbability, otherColors, multipleColors, singleColorID);
			break;
		case Pattern.Painting: 
			createPainting (texture, pixelScale, baseColor, baseColorProbability, otherColors, multipleColors, singleColorID);
			break;
		case Pattern.Noise: 
			createNoise (texture, pixelScale, baseColor, baseColorProbability, otherColors, multipleColors, singleColorID);
			break;
		}
		
		// apply all SetPixel calls
		texture.Apply();
		
		return texture;
	}



	// -----------------------------------------------------------
	// ----------            ICON PATTERNS           -------------
	// -----------------------------------------------------------

	static void createMirrorDouble(Texture2D texture, int pixelScale, Color baseColor, int baseColorProbability, Color[] otherColors, bool multipleColors, int singleColorID){
		for (int x = 0; x < pixelScale / 2; x++){
			for (int y = 0; y < pixelScale / 2; y++){
				// double the likeliness to get the baseColor than the other colors
				int colorID = Random.Range (-baseColorProbability, otherColors.Length);
				Color pixelColor;
				if (colorID < 0){
					pixelColor = baseColor;
				} else{
					if (multipleColors){
						pixelColor = otherColors[colorID];
					} else {
						pixelColor = otherColors[singleColorID];
					}
				}
				texture.SetPixel(x, y, pixelColor);
				texture.SetPixel(pixelScale - 1 - x, y, pixelColor);
				texture.SetPixel(x, pixelScale - 1 - y, pixelColor);
				texture.SetPixel(pixelScale - 1 - x, pixelScale - 1 - y, pixelColor);
			}
		}
	}

	static void createMirrorVertical(Texture2D texture, int pixelScale, Color baseColor, int baseColorProbability, Color[] otherColors, bool multipleColors, int singleColorID){
		for (int x = 0; x < pixelScale / 2; x++){
			for (int y = 0; y < pixelScale; y++){
				// double the likeliness to get the baseColor than the other colors
				int colorID = Random.Range (-baseColorProbability, otherColors.Length);
				Color pixelColor;
				if (colorID < 0){
					pixelColor = baseColor;
				} else{
					if (multipleColors){
						pixelColor = otherColors[colorID];
					} else {
						pixelColor = otherColors[singleColorID];
					}
				}
				texture.SetPixel(x, y, pixelColor);
				texture.SetPixel(pixelScale - 1 - x, y, pixelColor);
			}
		}
	}

	static void createMirrorHorizontal(Texture2D texture, int pixelScale, Color baseColor, int baseColorProbability, Color[] otherColors, bool multipleColors, int singleColorID){
		for (int x = 0; x < pixelScale; x++){
			for (int y = 0; y < pixelScale / 2; y++){
				// double the likeliness to get the baseColor than the other colors
				int colorID = Random.Range (-baseColorProbability, otherColors.Length);
				Color pixelColor;
				if (colorID < 0){
					pixelColor = baseColor;
				} else{
					if (multipleColors){
						pixelColor = otherColors[colorID];
					} else {
						pixelColor = otherColors[singleColorID];
					}
				}
				texture.SetPixel(x, y, pixelColor);
				texture.SetPixel(x, pixelScale - 1 - y, pixelColor);
			}
		}
	}
	
	static void createFlag(Texture2D texture, int pixelScale, Color baseColor, int baseColorProbability, Color[] otherColors, bool multipleColors, int singleColorID){
		int mod = Random.Range (1, pixelScale / otherColors.Length * 2);
		int baseWidth = Random.Range (0, pixelScale - (pixelScale / (baseColorProbability * 2)));
		int boolDirection = Random.Range (0, 2);
		for (int x = 0; x < pixelScale; x++) {
			for (int y = 0; y < pixelScale; y++) {
				Color pixelColor;
				if (x < baseWidth){
					pixelColor = baseColor;
				} else {
					if (multipleColors){
						if (boolDirection == 0){
							pixelColor = otherColors[x/mod % otherColors.Length];
						} else{
							pixelColor = otherColors[y/mod % otherColors.Length];
						}
					}
					else{
						pixelColor = otherColors[singleColorID];
					}
				}
				texture.SetPixel(x, y, pixelColor);
			}
		}
	}

	static void createCircles(Texture2D texture, int pixelScale, Color baseColor, int baseColorProbability, Color[] otherColors, bool multipleColors, int singleColorID){
		float c = Random.Range (0.5f, 1f);
		int cOffset = Random.Range (0, otherColors.Length);
		float ringWidth = Random.Range (0.8f, 3.5f);
		for (int x = 0; x < pixelScale; x++){
			for (int y = 0; y < pixelScale; y++){
				Color pixelColor;
				float dist = Vector2.Distance(new Vector2((float)x, (float)y), new Vector2(((float)pixelScale / 2f) - 0.5f, ((float)pixelScale / 2f) - 0.5f));
				int colorID = ((int)(dist * 100f) + cOffset) % otherColors.Length;
				if (dist % ringWidth > c)
					pixelColor = baseColor;
				else {
					if (multipleColors){
						pixelColor = otherColors[colorID];
					} else {
						pixelColor = otherColors[singleColorID];
					}
				}
				texture.SetPixel(x, y, pixelColor);
			}
		}
	}

	static void createMill(Texture2D texture, int pixelScale, Color baseColor, int baseColorProbability, Color[] otherColors, bool multipleColors, int singleColorID){
		for (int x = 0; x < pixelScale / 2; x++){
			for (int y = 0; y < pixelScale / 2; y++){
				// double the likeliness to get the baseColor than the other colors
				int colorID = Random.Range (-baseColorProbability, otherColors.Length);
				Color pixelColor;
				if (colorID < 0){
					pixelColor = baseColor;
				} else{
					if (multipleColors){
						pixelColor = otherColors[colorID];
					} else {
						pixelColor = otherColors[singleColorID];
					}
				}
				texture.SetPixel(x, y, pixelColor);
				texture.SetPixel(y, pixelScale - 1 - x, pixelColor);
				texture.SetPixel(pixelScale - 1 - x, pixelScale - 1 - y, pixelColor);
				texture.SetPixel(pixelScale - 1 - y, x, pixelColor);
			}
		}
	}

	static void createPainting(Texture2D texture, int pixelScale, Color baseColor, int baseColorProbability, Color[] otherColors, bool multipleColors, int singleColorID){
		Color[,] colors = new Color[pixelScale,pixelScale];

		// basic color
		for (int x = 0; x < pixelScale; x++) {
			for (int y = 0; y < pixelScale; y++) {
				colors[x,y] = baseColor;
			}
		}

		int lines = pixelScale * Random.Range (3, 20 - (baseColorProbability * 8));
		Debug.Log ("Lines: " + lines);
		for (int l = 0; l < lines; l++) {
			int posX = Random.Range (0, pixelScale);
			int posY = Random.Range (0, pixelScale);
			int turns = Random.Range (5, 25);
			int colorID = Random.Range (0, otherColors.Length);

			for (int t = 0; t < turns; t++) {
				if (multipleColors){
					colors[posX, posY] = otherColors[colorID];
				} else {
					colors[posX, posY] = otherColors[singleColorID];
				}

				posX += Random.Range (-1, 2);
				posY += Random.Range (-1, 2);
				if (posX < 0 || posX >= pixelScale || posY < 0 || posY >= pixelScale){
					break;
				}
			}
		}

		// application
		for (int x = 0; x < pixelScale; x++) {
			for (int y = 0; y < pixelScale; y++) {
				texture.SetPixel(x, y, colors[x,y]);
			}
		}
	}

	static void createNoise(Texture2D texture, int pixelScale, Color baseColor, int baseColorProbability, Color[] otherColors, bool multipleColors, int singleColorID){
		for (int x = 0; x < pixelScale; x++){
			for (int y = 0; y < pixelScale; y++){
				// double the likeliness to get the baseColor than the other colors
				int colorID = Random.Range (-baseColorProbability, otherColors.Length);
				Color pixelColor;
				if (colorID < 0){
					pixelColor = baseColor;
				} else{
					if (multipleColors){
						pixelColor = otherColors[colorID];
					} else {
						pixelColor = otherColors[singleColorID];
					}
				}
				texture.SetPixel(x, y, pixelColor);
			}
		}
	}
}

using UnityEngine;
using System.Collections;

public static class IconGenerator {
	// default values
	public static Texture2D create(){
		Color[] colors = new Color[]{Color.white};
		return create (8, Color.black, true, colors);
	}
	
	public static Texture2D create(int scale, Color baseColor, bool randomColor, Color[] colors){
		// Create a new 2x2 texture ARGB32 (32 bit with alpha) and no mipmaps
		Texture2D texture = new Texture2D(scale, scale, TextureFormat.ARGB32, false);
		texture.filterMode = FilterMode.Point;
		
		// prevent transparency
		baseColor.a = 1f;
		
		if (randomColor) { // generate random colors
			for (int i = 0; i < colors.Length; i++) {
				colors [i] = new HSBColor (Random.Range (0f, 1f), 1f, 1f).ToColor ();
			}
		} else { // prevent transparency
			for (int i = 0; i < colors.Length; i++) {
				colors [i].a = 1f;
			}
		}
		
		// create the texture
		for (int x = 0; x < scale / 2; x++){
			for (int y = 0; y < scale / 2; y++){
				// double the likeliness to get the baseColor then the other colors
				int colorID = Random.Range (-2, colors.Length);
				Color pixelColor;
				if (colorID < 0){
					pixelColor = baseColor;
				} else{
					pixelColor = colors[colorID];
				}
				
				// currently only mirrored mode available, add more later
				texture.SetPixel(x, y, pixelColor);
				texture.SetPixel(scale - 1 - x, y, pixelColor);
				texture.SetPixel(x, scale - 1 - y, pixelColor);
				texture.SetPixel(scale - 1 - x, scale - 1 - y, pixelColor);
			}
		}
		
		// apply all SetPixel calls
		texture.Apply();
		
		return texture;
	}
}

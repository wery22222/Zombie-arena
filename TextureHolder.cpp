#include "TextureHolder.h"

// include the assert function
#include <assert.h>

TextureHolder* TextureHolder::m_s_Instance = nullptr;

TextureHolder::TextureHolder()
{
	assert(m_s_Instance == nullptr);
	m_s_Instance = this;
}
Texture& TextureHolder::GetTexture(string const& filename)
{
	//get a reference to m_Textures using m_s_Instance
	auto& m = m_s_Instance->m_Textures;
	// auto is the equilavant of map<stirng, Texture>

	//create an iterator to hold a key-value-pair (kvp) and search for the required kvp using thepassed in the file name
	auto keyValuePair = m.find(filename);
	// auto is equivalent of map<stirng,Texture>::iterator

	//did we find a match?
	if (keyValuePair != m.end())
	{
		// Yes return the texture the second part of the kvp the texture
		return keyValuePair->second;
	}
	else 
	{
		// Filename not found 
		// create a new key value pair using the filename
		auto& texture = m[filename];
		// Load the texture from the file in the usual way
		texture.loadFromFile(filename);
		// Return the texture to the calling code
		return texture;
	}
}
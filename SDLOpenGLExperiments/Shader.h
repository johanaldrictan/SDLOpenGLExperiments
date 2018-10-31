#pragma once
#ifndef SHADER_H
#define SHADER_H



struct shader
{
	// the program ID
	unsigned int ID;
};

void CreateShader(shader* Shader, const char* vertexPath, const char* fragmentPath);

#endif
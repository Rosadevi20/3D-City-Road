#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint 
		//Buat Orang
		VBO, VAO, EBO, VBO3, VAO3, EBO3, VBO4, VAO4, EBO4, VBO5, VAO5, EBO5, texture,
		//Buat Rumput
		VBO2, VAO2, EBO2, texture2,
		//buat sky, gedung, jalan
		VBO7, VAO7, EBO7, texture3, texture4, texture5, texture6, texture7, texture8, texture9, texture10, texture11, texture12, texture13, texture14, texture15,
		texture16, texture17, texture18, texture19, shadowmapShader, depthmapShader,
		//shadow
		depthMapFBO, depthMap;

	float angle = 0;
	float posisiX = 0;
	float posisiY = 0;
	float posisiZ = 0;
	float speed= 0.7;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
	void BuildColoredKepala();
	void BuildColoredBadan();
	void BuildColoredkaki();
	void BuildColoredTangan();
	void BuildColoredPlane();
	void BuildColoredSky();
	void BuildColoredBuilding();
	void BuildColoredGedung();
	void BuildColoredBangunan();
	void BuildColoredGedPut();
	void BuildColoredStreet();
	void BuildColoredRumah();
	void BuildColoredKos();
	void BuildJalanHorizon();
	void BuildHouse();
	void BuildingApart();
	void BuildGedPink();
	void BuildBatang();
	void BuildDaun();
	void BuildTiang();
	void BuildBangjo();

	void DrawColoredKepala(GLuint shaderProgram);
	void DrawBadan(GLuint shaderProgram);
	void DrawTangan(GLuint shaderProgram);
	void DrawKaki(GLuint shaderProgram);
	void DrawColoredPlane(GLuint shaderProgram);
	void DrawSky(GLuint shaderProgram);
	void DrawBuilding(GLuint shaderProgram);
	void DrawGedung(GLuint shaderProgram);
	void DrawBangunan(GLuint shaderProgram);
	void DrawGedPut(GLuint shaderProgram);
	void DrawStreet(GLuint shaderProgram);
	void DrawRumah(GLuint shaderProgram);
	void DrawKos(GLuint shaderProgram);
	void DrawJalanHorizon(GLuint shaderProgram);
	void DrawHouse(GLuint shaderProgram);
	void DrawApart(GLuint shaderProgram);
	void DrawGedPink(GLuint shaderProgram);
	void DrawBatang(GLuint shaderProgram);
	void DrawDaun(GLuint shaderProgram);
	void DrawTiang(GLuint shaderProgram);
	void DrawBangjo(GLuint shaderProgram);
};


#include "Globals.h"
#include "Application.h"
#include "ModuleSceneIntro.h"
#include "Primitive.h"

ModuleSceneIntro::ModuleSceneIntro(Application* app, bool start_enabled) : Module(app, start_enabled)
{
}

ModuleSceneIntro::~ModuleSceneIntro()
{}

// Load assets
bool ModuleSceneIntro::Start()
{
	LOG("Loading Intro assets");
	bool ret = true;

	// TODO 2: Place the camera one unit up in Y and one unit to the right
	// experiment with different camera placements, then use LookAt()
	// to make it look at the center
	App->camera->LookAt({ 0,0,0 });

	return ret;
}

// Load assets
bool ModuleSceneIntro::CleanUp()
{
	LOG("Unloading Intro scene");

	return true;
}

// Update: draw background
update_status ModuleSceneIntro::Update()
{
	// TODO 1: Create a Plane primitive. This uses the plane formula
	// so you have to express the normal of the plane to create 
	// a plane centered around 0,0. Make that it draw the axis for reference
	Plane grid(200,200,200,200);
	grid.color.Set(10,2,10,1);
	grid.normal = (0, 1, 0);
	grid.axis = true;
	grid.Render();

	// TODO 6: Draw a sphere of 0.5f radius around the center
	// Draw somewhere else a cube and a cylinder in wireframe
	Sphere MainSphere;
	Cube MainCube;
	Cylinder MainCylinder;
	MainSphere.radius = 0.5;
	MainSphere.Render();
	MainCube.size = 0.5;
	MainCube.Render();
	MainCylinder.radius = 0.5;
	MainCylinder.height = 3;
	MainCylinder.Render();
	return UPDATE_CONTINUE;
}


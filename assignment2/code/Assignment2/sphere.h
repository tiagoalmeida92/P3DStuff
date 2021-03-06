#ifndef SPHERE_H
#define SPHERE_H

#include"object.h"

class Sphere : public Object{

private:
	float radius;

public:
	Sphere(glm::vec3 position, float radius);

	float getRadius();

	bool hasIntersection(Ray ray);
	bool getIntersectionPoint(glm::vec3& intersect, float& t, Ray ray);
	glm::vec3 getNormal(glm::vec3 intersectionPoint, Ray ray);
	bool isInside(glm::vec3 point);
};


#endif;

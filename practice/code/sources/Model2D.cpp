#include "Model2D.hpp"

namespace tool 
{

	void Model2D::addVertex(std::shared_ptr<Vector2> vert) 
	{
		vertex.push_back(vert);
	}

	void Model2D::fillVectors(Vector2 vectors[]) 
	{
		for (int i = 0; i < getVectorsAmount(); ++i)
		{
			vectors[i].set(vertex[i]->x, vertex[i]->y);
		}
	}
}


typedef struct vector2d_s Vector2d;

struct vector2d_s{
	int x;
	int y;
} aVector1, aVector2;

Vector2d vector(int x, int y)
{
	aVector1.x = x;
	aVector1.y = y;
	return aVector1;
}

Vector2d vectorSum(Vector2d v1, Vector2d v2)
{
	aVector2.x = v1.x + v2.x;
	aVector2.y = v1.y + v2.y;
	return aVector2;
}

/*
Test:
Vector2d v1 = vector(100, -97);
Vector2d v2 = vector(11, 1);
Vector2d v3 = vectorSum(v1, v2);
printf("(%d, %d) + (%d, %d) = (%d, %d)\n",
        v1.x, v1.y, v2.x, v2.y, v3.x, v3.y);
	
/*

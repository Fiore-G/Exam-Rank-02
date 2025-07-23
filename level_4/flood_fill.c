void	fill(char **tab, t_point size, char target, int y, int x)
{
	//Se verifican los limites de la matriz
	if (y < 0 || x < 0 || y >= size.y || x >= size.x)
		return ;
	//Se verifica si la celda ya fue llenada con 'F' o si el objetivo es valido
	if (tab[y][x] == 'F' || tab[y][x] != target)
		return ;
	//Marca la celda visitada con 'F'
	tab[y][x] = 'F';
	fill(tab, size, target, y - 1, x); //fill cell above
	fill(tab, size, target, y + 1, x); //fill cell below
	fill(tab, size, target, y, x - 1); //fill cell to the left
	fill(tab, size, target, y, x + 1); //fill cell to the right
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	//Obtiene el caracter objetivo en la posicion inicial
	char target = tab[begin.y][begin.x];
	//Comienza el llenado recursivo desde la posicion inicial
	fill(tab, size, target, begin.y, begin.x);
}

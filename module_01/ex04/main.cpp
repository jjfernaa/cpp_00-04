/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 02:09:35 by juan-jof          #+#    #+#             */
/*   Updated: 2026/01/09 05:41:52 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	replaceAll(std::string str, const std::string &s1, const std::string &s2)
{
	std::string	result;
	size_t		pos = 0;
	size_t		found;

	if (s1.empty())
		return (str);
	
	// Buscar todas las ocurrencias de s1
	while ((found = str.find(s1, pos)) != std::string::npos)
	{
		// Agregar todo antes de la  ocurrencia
		result += str.substr(pos, found - pos);
		// Agregar s2 (el reemplazo)
		result += s2;
		// Mover la posicion despues de s1
		pos = found + s1.length();
	}
	// Agregar al resto del string
	result += str.substr(pos);
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: invalid number of arguments" << std::endl;
		std::cerr << "Usage: ./sed_is_for_losers <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return (1);
	}
	// Abrir archivo de entrada
	std::ifstream inputFile(filename.c_str()); // .c:str() C++98
	if (!inputFile.is_open())
	{
		std::cerr << "Error: could not open file " << filename << std::endl;
		return (1);
	}
	// Crear archivo de salida
	std::string outputFilename = filename + ".replace";
	std::ofstream outputFile(outputFilename.c_str());
	if (!outputFile.is_open())
	{
		std::cerr << "Error: could not create file " << outputFilename << std::endl;
		inputFile.close();
		return (1); 
	}
	// Proceso el archivo liena por linea
	std::string line;
	while (std::getline(inputFile, line))
	{
		// Reemplezar s1 por s2 en la linea
		std::string replaced = replaceAll(line, s1, s2);
		// Escribo en el archivo de salida
		outputFile << replaced << std::endl;
	}
	// Cerrar los archivos
	inputFile.close();
	outputFile.close();

	std::cout << "File processed successfully: " << outputFilename << std::endl;
	return (0);
}
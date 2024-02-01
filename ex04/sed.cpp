#include "sed.hpp"
#include <fstream>
#include <string>

void Sed::replace(std::string filename, std::string s1, std::string s2) {

	// ouverture du ficher et gestion d erreur
	std::ifstream fichierOriginal(filename);
	if (!fichierOriginal) {
		std::cerr << "Cannot open file: " << filename << std::endl;
		return;
	}

	// creation nouveau fichier et gestion d erreur
	std::string nomFichierSortie = filename + ".replace";
	std::ofstream fichierSortie(nomFichierSortie);
	if (!fichierSortie) {
		std::cerr << "Cannot create output file: " << nomFichierSortie << std::endl;
		return;
	}

	std::string line;
	while (std::getline(fichierOriginal, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		fichierSortie << line << std::endl;
	}

	fichierOriginal.close();
	fichierSortie.close();
}

// Constructeur && Desctructeur
Sed::Sed(){}
Sed::~Sed(){}
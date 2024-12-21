# Nom du projet
TEMPLATE = app
TARGET = PlateformeLogistique

# Version de C++ à utiliser
CONFIG += c++17
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

# Dossiers contenant les fichiers d'en-tête (include) et les fichiers sources
INCLUDEPATH += include/core
DEPENDPATH += include/core

# Fichiers sources
SOURCES += \
    src/core/Entrepot.cpp \
    src/core/Produit.cpp \
    src/core/Transporteur.cpp \
    src/core/Simulation.cpp \
    tests/tests.cpp

# Fichiers d'en-tête
HEADERS += \
    include/core/Entrepot.h \
    include/core/Produit.h \
    include/core/Transporteur.h \
    include/core/Simulation.h

# Dossier de sortie pour les fichiers compilés
DESTDIR = bin

# Activer les warnings pour aider à trouver les erreurs
QMAKE_CXXFLAGS += -Wall -Wextra

# Configuration pour un Makefile (optionnel mais recommandé pour Linux)
MAKEFILE_GENERATOR = UNIX

# Si vous utilisez des bibliothèques Qt (si nécessaire pour votre projet)
# QT += core gui

# Si vous prévoyez de faire des tests unitaires avec Qt
# CONFIG += testcase

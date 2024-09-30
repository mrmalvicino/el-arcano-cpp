#pragma once

#include <iostream>
#include <cstdio>

template<typename Type>
class Archive
{
    public:

    Archive(std::string path)
    {
        setPath(path);
    }

    std::string getPath()
    {
        return _path;
    }

    void setPath(std::string path)
    {
        _path = path;
    }

    Type read(int index)
    {
        Type reg;
        FILE * file_pointer = fopen(getPath().c_str(), "rb");

        if (file_pointer == NULL)
        {
            std::cerr << "Error: No se pudo abrir el archivo.\n";
            return reg;
        }

        fseek(file_pointer, sizeof(Type) * index, SEEK_SET);
        fread(& reg, sizeof(Type), 1, file_pointer);
        fclose(file_pointer);
        return reg;
    }

    bool write(Type & reg)
    {
        FILE *file_pointer = fopen(getPath().c_str(), "ab");

        if (file_pointer == NULL)
        {
            std::cerr << "Error: No se pudo abrir el archivo.\n";
            return false;
        }

        bool successful_write = fwrite(& reg, sizeof(Type), 1, file_pointer);
        fclose(file_pointer);
        return successful_write;
    }

    bool overWrite(Type & reg, int index)
    {
        FILE *file_pointer = fopen(getPath().c_str(), "rb+");

        if (file_pointer == NULL)
        {
            std::cerr << "Error: No se pudo abrir el archivo.\n";
            return false;
        }

        fseek(file_pointer, sizeof(Type) * index, SEEK_SET);
        bool successful_write = fwrite(& reg, sizeof(Type), 1, file_pointer);
        fclose(file_pointer);
        return successful_write;
    }

    int getIndex(int id)
    {
        int i = 0;
        Type reg = read(i);

        while (reg.getId() != id && i < countRegisters())
        {
            i++;
            reg = read(i);
        }

        if (i == countRegisters())
        {
            return -1;
        }

        return i;
    }

    int countRegisters()
    {
        FILE *file_pointer = fopen(getPath().c_str(), "rb");

        if (file_pointer == NULL)
        {
            return 0;
        }

        fseek(file_pointer, 0, SEEK_END);
        int bytes = ftell(file_pointer);
        fclose(file_pointer);
        return bytes / sizeof(Type);
    }

    void createEmptyArchive()
    {
        FILE * file_pointer = fopen(getPath().c_str(), "wb");

        if (file_pointer == NULL)
        {
            std::cerr << "Error: No se pudo abrir el archivo.\n";
        }
        else
        {
            fclose(file_pointer);
        }
    }

    private:

    std::string _path;
};
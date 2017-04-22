//
//  File.cpp
//  File_Base
//
//  Created by Myles McKendell on 4/19/17.
//  Copyright © 2017 Myles McKendell. All rights reserved.
//

#include <stdio.h>
#include "File.h"
#include "Folder.h"



File::File(std::string name) : _name(name)
{
}

File::~File()
{
}

/*std::shared_ptr<File> Folder::file(std::string name)
{
    for(auto file :file)
    {
        if (file->getName() == name) {
            return file;
        }
    }
    return nullptr;
}
*/

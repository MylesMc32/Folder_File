//
//  File.h
//  File_Base
//
//  Created by Myles McKendell on 4/19/17.
//  Copyright © 2017 Myles McKendell. All rights reserved.
//

#ifndef File_h
#define File_h

#pragma once
#include <string>
class File
{
private:
    std::string _name;
public:
    File(std::string name);
    ~File();
    
    std::string getName() { return _name; }
    
    
    //std::shared_ptr<File> FindFile(std::string name);

    //void Search (std::string name);
};
#endif /* File_h */

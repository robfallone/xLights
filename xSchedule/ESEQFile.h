#pragma once

/***************************************************************
 * This source files comes from the xLights project
 * https://www.xlights.org
 * https://github.com/smeighan/xLights
 * See the github commit history for a record of contributing
 * developers.
 * Copyright claimed based on commit dates recorded in Github
 * License: https://github.com/smeighan/xLights/blob/master/License.txt
 **************************************************************/

#include <string>
#include <list>

#include <wx/file.h>

#include "Blend.h"

class ESEQFile
{
	std::string _filename;
	size_t _frames;
	size_t _channelsPerFrame;
	size_t _offset;
	size_t _modelSize;
    wxFile* _fh;
    uint8_t* _frameBuffer;
    size_t _frame0Offset;
    bool _ok;

    public:

        static int ReadInt16(wxFile* fh);
        static int ReadInt32(wxFile* fh);
        static std::list<std::string> GetBlendModes();

        ESEQFile();
        ESEQFile(const std::string& filename);
		void Load(const std::string& filename);
		virtual ~ESEQFile();
		int GetLengthFrames() const { return _frames; }
		void ReadData(uint8_t* buffer, size_t buffersize, size_t frame, APPLYMETHOD applyMethod);
		bool IsOk() const { return _ok; }
		size_t GetChannels() const { return _channelsPerFrame; }
		size_t GetOffset() const { return _offset; }
        void Close();
};

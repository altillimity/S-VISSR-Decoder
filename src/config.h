#pragma once

#include <string>

struct IngestorConfig
{
    long frequency;
    long samplerate;
    int gain;
    bool bias;
    bool write_demod_bin;
    std::string device;
    std::string data_directory;
    std::string sat_name;
};

extern IngestorConfig ingestorConfig;


void loadConfig();
#pragma once
#include "expose.h"
#include "llamaextra.h"

bool llama_load_model(const load_model_inputs inputs, FileFormat file_format);
generation_outputs llama_generate(const generation_inputs inputs, generation_outputs &output);
bool gptj_load_model(const load_model_inputs inputs, FileFormat in_file_format);
generation_outputs gptj_generate(const generation_inputs inputs, generation_outputs &output);
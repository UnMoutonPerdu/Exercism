#include "protein_translation.h"

namespace protein_translation {
    Protein proteins(std::string sequence) {
        Protein list_prot;
        std::string codon;
        for (int i = 0; i < (int) sequence.size(); i += 3) {
            codon = dico_codons.at(sequence.substr(i, 3));
            if (codon == "STOP") {
                break;
            }
            list_prot.push_back(codon);
        }
        return list_prot;
    }
}  // namespace protein_translation

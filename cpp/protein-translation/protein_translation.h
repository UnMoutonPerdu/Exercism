#if !defined(PROTEIN_TRANSLATION_H)
#define PROTEIN_TRANSLATION_H

#include <vector>
#include <string>
#include <map>

namespace protein_translation {
    typedef std::vector<std::string> Protein;
    static std::map<std::string, std::string> dico_codons = {
        {"AUG", "Methionine"},
        {"UUU", "Phenylalanine"},
        {"UUC", "Phenylalanine"},
        {"UUA", "Leucine"},
        {"UUG", "Leucine"},
        {"UCU", "Serine"},
        {"UCC", "Serine"},
        {"UCA", "Serine"},
        {"UCG", "Serine"},
        {"UAU", "Tyrosine"},
        {"UAC", "Tyrosine"},
        {"UGU", "Cysteine"},
        {"UGC", "Cysteine"},
        {"UGG", "Tryptophan"},
        {"UAA", "STOP"},
        {"UGA", "STOP"},
        {"UAG", "STOP"}
    };
    Protein proteins(std::string);
}  // namespace protein_translation

#endif // PROTEIN_TRANSLATION_H

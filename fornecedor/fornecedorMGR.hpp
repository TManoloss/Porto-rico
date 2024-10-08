#ifndef FORNECEDOR_MGR_HPP
#define FORNECEDOR_MGR_HPP

#include <string>
#include <vector>

#include "fornecedorDAO.hpp"

class FornecedorMGR {
    private:
        FornecedorDAO fornecedorDAO;
        FornecedorMGR(): fornecedorDAO(FornecedorDAO::getInstance()){}
    public:
    static FornecedorMGR& getInstance(){
        static FornecedorMGR instance;
        return instance;
    }
        void cadastrarFornecedor(const Fornecedor& fornecedor);
        Fornecedor buscarFornecedor(const int& id);
        void atualizarFornecedor(const Fornecedor& fornecedor);
        void deletarFornecedor(int id);
        vector<Fornecedor> listarFornecedores();
        void listarFornecedoresDetalhados();
};

#endif



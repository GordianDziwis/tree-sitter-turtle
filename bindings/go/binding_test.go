package tree_sitter_turtle_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-turtle"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_turtle.Language())
	if language == nil {
		t.Errorf("Error loading Turtle grammar")
	}
}

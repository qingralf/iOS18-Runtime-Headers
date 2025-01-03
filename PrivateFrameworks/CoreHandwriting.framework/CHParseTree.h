/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHParseTree : NSObject {
    bool  __caseSensitive;
    NSNumberFormatter * _formatter;
    CHGrammar * _grammar;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _inputRange;
    CHNonTerminal * _root;
}

@property (nonatomic, retain) NSNumberFormatter *formatter;
@property (nonatomic, retain) CHGrammar *grammar;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } inputRange;
@property (nonatomic, retain) CHNonTerminal *root;

- (void).cxx_destruct;
- (id)_descriptionRecursive:(id)arg1 level:(long long)arg2;
- (id)_evaluationRecursive:(id)arg1 withVariables:(id)arg2;
- (id)_functionRepresentationRecursive:(id)arg1;
- (id)_latexRepresentationRecursive:(id)arg1;
- (bool)compareWith:(id)arg1 compareTree:(bool)arg2;
- (id)description;
- (id)evaluateOpExpPriority:(id)arg1;
- (id)evaluation;
- (id)evaluationWithVariables:(id)arg1;
- (id)evaluationWithVariables:(id)arg1 caseSensitive:(bool)arg2;
- (id)formatter;
- (id)functionRepresentation;
- (long long)getNumberOfNodes;
- (id)getSymbols;
- (id)grammar;
- (id)initWithGrammar:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })inputRange;
- (id)latexRepresentation;
- (id)root;
- (void)setFormatter:(id)arg1;
- (void)setGrammar:(id)arg1;
- (void)setInputRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRoot:(id)arg1;

@end

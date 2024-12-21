/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHParseTable : NSObject {
    long long  _grammarSize;
    long long  _inputLength;
    NSMutableArray * _table;
}

@property (nonatomic) long long grammarSize;
@property (nonatomic) long long inputLength;

- (void).cxx_destruct;
- (void)addCell:(id)arg1;
- (id)cellWithLength:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 nonTerminal:(id)arg3;
- (id)cellsByRangeForLength:(long long)arg1;
- (id)cellsOfLength:(long long)arg1;
- (void)clear:(long long)arg1;
- (long long)grammarSize;
- (id)initWithInputLength:(long long)arg1 grammarSize:(long long)arg2;
- (long long)inputLength;
- (void)setGrammarSize:(long long)arg1;
- (void)setInputLength:(long long)arg1;
- (id)startCellsWithLength:(long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 startSymbol:(id)arg3;

@end
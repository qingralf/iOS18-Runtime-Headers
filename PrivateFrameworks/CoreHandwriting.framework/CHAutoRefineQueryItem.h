/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHAutoRefineQueryItem : NSObject {
    CHRecognitionSessionAutoRefineResult * _autoRefineResult;
    NSIndexSet * _refinedTokenColumns;
}

@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly, copy) NSIndexSet *refinedTokenColumns;
@property (nonatomic, readonly, copy) NSArray *strokeIdentifiers;
@property (nonatomic, readonly, copy) CHTokenizedTextResult *textResult;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithAutoRefineResult:(id)arg1;
- (id)locale;
- (bool)q_doesQueryResultDependOnDeclaredVariables;
- (id)refinedTokenColumns;
- (id)strokeIdentifiers;
- (id)textResult;

@end
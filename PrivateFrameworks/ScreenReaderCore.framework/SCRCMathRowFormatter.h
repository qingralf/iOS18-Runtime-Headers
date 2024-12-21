/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathRowFormatter : NSObject {
    NSMutableArray * _childrenStack;
    bool  _isNumberOverride;
}

@property (nonatomic, retain) NSMutableArray *childrenStack;
@property (nonatomic) bool isNumberOverride;

- (void).cxx_destruct;
- (void)_addDictionary:(id)arg1;
- (void)addCloseParenthesis:(bool)arg1;
- (void)addIdentifier:(id)arg1;
- (void)addNumber:(id)arg1 implicit:(bool)arg2;
- (void)addOpenParenthesis;
- (void)addOperator:(id)arg1 implicit:(bool)arg2;
- (void)addRadicalWithRootIndex:(id)arg1;
- (void)addSubscript:(id)arg1 superscript:(id)arg2;
- (void)appendMathEquation:(id)arg1;
- (id)childrenStack;
- (id)init;
- (id)initWithIsNumberOverride:(bool)arg1;
- (bool)isNumberOverride;
- (id)mathEquation;
- (void)setChildrenStack:(id)arg1;
- (void)setIsNumberOverride:(bool)arg1;

@end
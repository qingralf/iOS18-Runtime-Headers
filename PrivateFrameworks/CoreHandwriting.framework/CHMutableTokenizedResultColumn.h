/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHMutableTokenizedResultColumn : CHTokenizedResultColumn

@property (nonatomic, copy) NSArray *tokenRows;

- (long long)addTokenRowWithTokens:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithTokenRows:(id)arg1;
- (void)removeTokenRowAtIndex:(long long)arg1;
- (void)setTokenRowWithTokens:(id)arg1 atIndex:(long long)arg2;
- (void)setTokenRows:(id)arg1;
- (void)sortTokenRows;

@end

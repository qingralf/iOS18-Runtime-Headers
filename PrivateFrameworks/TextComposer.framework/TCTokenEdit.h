/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextComposer.framework/TextComposer
 */

@interface TCTokenEdit : NSObject <NSCopying> {
    TCTokenInfo * _inputToken;
    long long  _operation;
    TCTokenInfo * _outputToken;
}

@property (readonly, copy) TCTokenInfo *inputToken;
@property (readonly) long long operation;
@property (readonly, copy) TCTokenInfo *outputToken;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithOperation:(long long)arg1 inputToken:(id)arg2 outputToken:(id)arg3;
- (id)inputToken;
- (bool)isEqual:(id)arg1;
- (long long)operation;
- (id)outputToken;

@end

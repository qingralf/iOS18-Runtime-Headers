/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextGeneration.framework/TextGeneration
 */

@interface TGTextGenerationPrompt : NSObject <NSCopying, NSMutableCopying> {
    NSString * _contextText;
    NSString * _description;
    NSString * _instructionText;
}

@property (copy) NSString *contextText;
@property (readonly, copy) NSString *instructionText;

- (void).cxx_destruct;
- (id)contextText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithInstructionText:(id)arg1;
- (id)instructionText;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setContextText:(id)arg1;

@end

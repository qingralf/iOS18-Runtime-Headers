/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextGeneration.framework/TextGeneration
 */

@interface TGTextGenerationOutput : NSObject <NSCopying> {
    NSString * _description;
    double  _score;
    NSString * _text;
}

@property (readonly) double score;
@property (readonly, copy) NSString *text;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithText:(id)arg1 score:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)score;
- (id)text;

@end

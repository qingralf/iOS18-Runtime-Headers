/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRSampleMEIClusterAddArgumentsResponseParams : NSObject <NSCopying> {
    NSNumber * _returnValue;
}

@property (nonatomic, copy) NSNumber *returnValue;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const struct DecodableType { unsigned char x1; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)returnValue;
- (void)setReturnValue:(id)arg1;

@end
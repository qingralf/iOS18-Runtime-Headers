/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRThermostatClusterAtomicResponseParams : NSObject <NSCopying> {
    NSArray * _attributeStatus;
    NSNumber * _statusCode;
    NSNumber * _timeout;
}

@property (nonatomic, copy) NSArray *attributeStatus;
@property (nonatomic, copy) NSNumber *statusCode;
@property (nonatomic, copy) NSNumber *timeout;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)attributeStatus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (void)setAttributeStatus:(id)arg1;
- (void)setStatusCode:(id)arg1;
- (void)setTimeout:(id)arg1;
- (id)statusCode;
- (id)timeout;

@end
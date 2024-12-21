/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRICDManagementClusterStayActiveResponseParams : NSObject <NSCopying> {
    NSNumber * _promisedActiveDuration;
}

@property (nonatomic, copy) NSNumber *promisedActiveDuration;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const struct DecodableType { unsigned int x1; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)promisedActiveDuration;
- (void)setPromisedActiveDuration:(id)arg1;

@end
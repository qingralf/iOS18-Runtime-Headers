/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTROvenCavityOperationalStateClusterOperationalCommandResponseParams : NSObject <NSCopying> {
    MTROvenCavityOperationalStateClusterErrorStateStruct * _commandResponseState;
}

@property (nonatomic, copy) MTROvenCavityOperationalStateClusterErrorStateStruct *commandResponseState;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)commandResponseState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (void)setCommandResponseState:(id)arg1;

@end

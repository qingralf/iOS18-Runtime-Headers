/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriverTransports_Base.framework/AudioServerDriverTransports_Base
 */

@interface ASDTControlProperty : ASDCustomProperty {
    ASDControl * _control;
    struct AudioObjectPropertyAddress { 
        unsigned int mSelector; 
        unsigned int mScope; 
        unsigned int mElement; 
    }  _controlAddress;
}

@property (nonatomic) ASDControl *control;
@property (nonatomic) struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; } controlAddress;

+ (id)forControl:(id)arg1 controlSelector:(unsigned int)arg2 propertySelector:(unsigned int)arg3 propertyDataType:(unsigned int)arg4;
+ (id)forControl:(id)arg1 controlSelector:(unsigned int)arg2 propertySelector:(unsigned int)arg3 propertyDataType:(unsigned int)arg4 andQualifierDataType:(unsigned int)arg5;

- (void).cxx_destruct;
- (id)control;
- (struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; })controlAddress;
- (unsigned int)dataSizeWithQualifierSize:(unsigned int)arg1 andQualifierData:(const void*)arg2;
- (bool)getPropertyWithQualifierSize:(unsigned int)arg1 qualifierData:(const void*)arg2 dataSize:(unsigned int*)arg3 andData:(void*)arg4 forClient:(int)arg5;
- (id)initForControl:(id)arg1 controlSelector:(unsigned int)arg2 propertySelector:(unsigned int)arg3 propertyDataType:(unsigned int)arg4 andQualifierDataType:(unsigned int)arg5;
- (bool)isSettable;
- (void)setControl:(id)arg1;
- (void)setControlAddress:(struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (bool)setPropertyWithQualifierSize:(unsigned int)arg1 qualifierData:(const void*)arg2 dataSize:(unsigned int)arg3 andData:(const void*)arg4 forClient:(int)arg5;

@end

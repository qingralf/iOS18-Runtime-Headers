/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriverTransports_Base.framework/AudioServerDriverTransports_Base
 */

@interface ASDTCustomProperty : ASDCustomProperty {
    int  _cacheMode;
    NSData * _dataNoCopy;
    NSString * _name;
    bool  _plistDeepCopyOnSet;
    id  _propertyValue;
    unsigned int  _propertyValueSize;
    bool  _propertyValueWasCached;
    bool  _useCache;
}

@property (nonatomic) int cacheMode;
@property (nonatomic) NSData *dataNoCopy;
@property (nonatomic, readonly) bool includeValueInDescription;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) bool plistDeepCopyOnSet;
@property (nonatomic, retain) id propertyValue;
@property (nonatomic) unsigned int propertyValueSize;
@property (nonatomic) bool propertyValueWasCached;
@property (nonatomic) bool useCache;

+ (bool)automaticallyNotifiesObserversOfPropertyValue;
+ (bool)automaticallyNotifiesObserversOfValue;
+ (id)consolidatePList:(id)arg1;
+ (id)customPropertyForConfig:(id)arg1;

- (void).cxx_destruct;
- (int)cacheMode;
- (void)cachePropertyValue:(id)arg1;
- (id)cachedPropertyValue;
- (bool)checkAndSetPropertyValue:(id)arg1;
- (bool)checkPropertyValue:(id)arg1;
- (id)dataNoCopy;
- (unsigned int)dataSizeWithQualifierSize:(unsigned int)arg1 andQualifierData:(const void*)arg2;
- (void)doCachePropertyValue:(id)arg1;
- (bool)getPropertyWithQualifierSize:(unsigned int)arg1 qualifierData:(const void*)arg2 dataSize:(unsigned int*)arg3 andData:(void*)arg4 forClient:(int)arg5;
- (bool)includeValueInDescription;
- (id)initWithConfig:(id)arg1 propertyDataType:(unsigned int)arg2 qualifierDataType:(unsigned int)arg3;
- (id)name;
- (bool)plistDeepCopyOnSet;
- (id)propertyName;
- (id)propertyValue;
- (unsigned int)propertyValueSize;
- (bool)propertyValueWasCached;
- (void)releasePropertyValueCache;
- (id)retrievePropertyValue;
- (void)setCacheMode:(int)arg1;
- (void)setDataNoCopy:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPlistDeepCopyOnSet:(bool)arg1;
- (void)setPropertyValue:(id)arg1;
- (void)setPropertyValueSize:(unsigned int)arg1;
- (void)setPropertyValueWasCached:(bool)arg1;
- (bool)setPropertyValueWithResult:(id)arg1;
- (bool)setPropertyWithQualifierSize:(unsigned int)arg1 qualifierData:(const void*)arg2 dataSize:(unsigned int)arg3 andData:(const void*)arg4 forClient:(int)arg5;
- (void)setUseCache:(bool)arg1;
- (bool)storePropertyValue:(id)arg1;
- (bool)useCache;
- (id)value;

@end

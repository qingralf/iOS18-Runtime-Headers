/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFRequestKey : NSObject <CAFCacheableDescription, NSCopying> {
    CAFCachedDescription * _cachedDescription;
    NSNumber * _pluginID;
    NSNumber * _priority;
}

@property (nonatomic, readonly) CAFCachedDescription *cachedDescription;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *pluginID;
@property (nonatomic, readonly) NSNumber *priority;
@property (readonly) Class superclass;

+ (id)requestKeyForCharacteristic:(id)arg1;
+ (id)requestKeyForControl:(id)arg1;

- (void).cxx_destruct;
- (id)cachedDescription;
- (id)copyWithPriority:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentDescriptionForCache:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPriority:(id)arg1 pluginID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)pluginID;
- (id)priority;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOVLFCrowdsourcingDataCollectionEnabledListener : NSObject <GEOConfigChangeListenerDelegate> {
    <GEOVLFCrowdsourcingDataCollectionEnabledChangeListenerDelegate> * _listener;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithListener:(id)arg1 queue:(id)arg2;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x1; void *x2; })arg1;

@end

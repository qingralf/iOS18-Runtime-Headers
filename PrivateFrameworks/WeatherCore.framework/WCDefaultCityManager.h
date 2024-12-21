/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherCore.framework/WeatherCore
 */

@interface WCDefaultCityManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataSynchronizationLock;
    NSArray * _defaultCities;
    NSObject<OS_dispatch_queue> * _reloadQueue;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } dataSynchronizationLock;
@property (nonatomic, retain) NSArray *defaultCities;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *reloadQueue;

+ (bool)isGreenTea;

- (void).cxx_destruct;
- (struct os_unfair_lock_s { unsigned int x1; })dataSynchronizationLock;
- (id)defaultCities;
- (id)defaultCityForLocalTimeZone;
- (id)init;
- (id)initDeferLoading:(bool)arg1;
- (id)reloadDefaultCities;
- (id)reloadQueue;
- (void)setDefaultCities:(id)arg1;
- (void)setReloadQueue:(id)arg1;

@end
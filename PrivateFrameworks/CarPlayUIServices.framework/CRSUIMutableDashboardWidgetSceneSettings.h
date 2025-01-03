/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
 */

@interface CRSUIMutableDashboardWidgetSceneSettings : UIMutableCarPlayApplicationSceneSettings <CRSUIDashboardWidgetSceneSettings, CRSUIMutableFrameRateLimitProviding, CRSUIMutableMapStyleProviding>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSObject<OS_xpc_object> *endpoint;
@property (nonatomic, readonly) NSNumber *frameRateLimit;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mapStyle;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long widgetStyle;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)endpoint;
- (id)frameRateLimit;
- (long long)mapStyle;
- (void)setEndpoint:(id)arg1;
- (void)setFrameRateLimit:(id)arg1;
- (void)setMapStyle:(long long)arg1;
- (void)setWidgetStyle:(unsigned long long)arg1;
- (unsigned long long)widgetStyle;

@end

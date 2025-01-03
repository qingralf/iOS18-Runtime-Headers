/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShiftingEnabledResponse : GEOXPCReply <GEOXPCReply> {
    bool  _enabled;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)enabled;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setEnabled:(bool)arg1;

@end

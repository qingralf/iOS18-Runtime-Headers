/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOXPCMessage : NSObject {
    NSObject<OS_xpc_object> * _object;
}

+ (bool)canDecodeFromXPCDictionary:(id)arg1;
+ (id)decodeFromXPCDictionary:(id)arg1 error:(id*)arg2;
+ (id)messageName;

- (void).cxx_destruct;
- (id)_prepareMessage;
- (id)description;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (void)send:(id)arg1;
- (bool)sendSync:(id)arg1 error:(id*)arg2;

@end

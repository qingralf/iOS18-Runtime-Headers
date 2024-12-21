/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MatterPlugin.framework/MatterPlugin
 */

@interface MTRDeviceControllerEntity : NSObject {
    MTRDeviceController * _controller;
    NSUUID * _entityIdentifier;
}

@property (retain) MTRDeviceController *controller;
@property (retain) NSUUID *entityIdentifier;

- (void).cxx_destruct;
- (id)controller;
- (id)description;
- (id)entityIdentifier;
- (unsigned long long)hash;
- (id)initWithController:(id)arg1 entityIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setController:(id)arg1;
- (void)setEntityIdentifier:(id)arg1;

@end
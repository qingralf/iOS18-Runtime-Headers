/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGadgetSection : NSObject {
    long long  _changeCount;
    PXGadgetSpec * _gadgetSpec;
    NSArray * _gadgets;
    NSString * _identifier;
}

@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) NSArray *gadgets;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)description;
- (id)gadgetSpec;
- (id)gadgets;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 gadgets:(id)arg2;
- (void)setGadgetSpec:(id)arg1;

@end
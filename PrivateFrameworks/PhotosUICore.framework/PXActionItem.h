/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXActionItem : NSObject <PXMenuAction> {
    id /* block */  _handler;
    unsigned long long  _role;
    long long  _state;
    NSString * _systemImageName;
    NSString * _title;
}

@property (nonatomic, readonly) <PXMenuAction> *alternateAction;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) UIImage *image;
@property (nonatomic, readonly) unsigned long long role;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *systemImageName;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)alternateAction;
- (id /* block */)handler;
- (id)image;
- (id)initWithTitle:(id)arg1 systemImageName:(id)arg2 role:(unsigned long long)arg3 handler:(id /* block */)arg4;
- (id)initWithTitle:(id)arg1 systemImageName:(id)arg2 role:(unsigned long long)arg3 state:(long long)arg4 handler:(id /* block */)arg5;
- (void)performAction;
- (unsigned long long)role;
- (long long)state;
- (id)systemImageName;
- (id)title;

@end

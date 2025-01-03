/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRenamePersonAction : PXPhotosAction {
    NSString * _name;
    NSString * _originalName;
    NSString * _originalUri;
    PHPerson * _person;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *originalName;
@property (nonatomic, readonly, copy) NSString *originalUri;
@property (nonatomic, readonly) PHPerson *person;

- (void).cxx_destruct;
- (void)_performChangeForUndo:(bool)arg1 completion:(id /* block */)arg2;
- (id)actionIdentifier;
- (id)initWithPerson:(id)arg1 name:(id)arg2;
- (id)localizedActionName;
- (id)name;
- (id)originalName;
- (id)originalUri;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (id)person;

@end

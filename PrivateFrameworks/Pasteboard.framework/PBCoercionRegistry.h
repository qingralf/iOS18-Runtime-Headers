/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

@interface PBCoercionRegistry : NSObject {
    NSObject<OS_dispatch_queue> * _memberQueue;
    NSMutableDictionary * _member_classCoercionByClass;
    NSMutableDictionary * _member_exporterByClass;
    NSMutableDictionary * _member_importerByClass;
    NSMutableArray * _member_representationCoercions;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic, retain) NSMutableDictionary *member_classCoercionByClass;
@property (nonatomic, retain) NSMutableDictionary *member_exporterByClass;
@property (nonatomic, retain) NSMutableDictionary *member_importerByClass;
@property (nonatomic, retain) NSMutableArray *member_representationCoercions;

// Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard

+ (id)archivedDataFromObject:(id)arg1 requestedType:(id)arg2 outError:(id*)arg3;
+ (id)defaultRegistry;
+ (id)objectFromArchivedData:(id)arg1 URL:(id)arg2 requestedClass:(Class)arg3 typeIdentifier:(id)arg4 outError:(id*)arg5;

- (void).cxx_destruct;
- (id)_availableClassesToCoerceFromClass:(Class)arg1;
- (id)_member_acceptableRepresentationTypesForCreatingObjectOfClass:(Class)arg1;
- (id)_member_availableClassesToCoerceToFromClass:(Class)arg1;
- (id)_member_availableDirectRepresentationTypesForClass:(Class)arg1;
- (void)_member_enumerateAvailableCoercionLoaderBlocksForRepresentation:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)_member_exporterFromClass:(Class)arg1 toType:(id)arg2;
- (void)_member_registerCoercionFromObjectOfClass:(Class)arg1 toObjectOfClass:(Class)arg2 coercionBlock:(id /* block */)arg3;
- (void)_member_registerCoercionFromObjectOfClass:(Class)arg1 toRepresentationOfType:(id)arg2 coercionBlock:(id /* block */)arg3;
- (void)_member_registerCoercionFromRepresentationConformingToType:(id)arg1 toObjectOfClass:(Class)arg2 coercionBlock:(id /* block */)arg3;
- (void)_member_registerCoercionFromRepresentationConformingToType:(id)arg1 toRepresentationOfType:(id)arg2 coercionBlock:(id /* block */)arg3;
- (id)_newObjectOfClass:(Class)arg1 fromData:(id)arg2 URL:(id)arg3 ofType:(id)arg4 outError:(id*)arg5;
- (id)acceptableRepresentationTypesForCreatingObjectOfClass:(Class)arg1;
- (id)availableRepresentationTypesForClass:(Class)arg1;
- (bool)canCoerceFromRepresentationConformingToType:(id)arg1 toObjectOfClass:(Class)arg2;
- (bool)canCoerceObjectOfClass:(Class)arg1 toObjectOfClass:(Class)arg2;
- (bool)canCoerceObjectOfClass:(Class)arg1 toRepresentationConformingToType:(id)arg2;
- (void)enumerateAvailableCoercionLoaderBlocksForRepresentation:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)loadCoercionOfRepresentation:(id)arg1 fromType:(id)arg2 toType:(id)arg3 usingCoercion:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)loadRepresentationOfObject:(id)arg1 asType:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)memberQueue;
- (id)member_classCoercionByClass;
- (id)member_exporterByClass;
- (id)member_importerByClass;
- (id)member_representationCoercions;
- (id)newObjectOfClass:(Class)arg1 fromContentsOfURL:(id)arg2 ofType:(id)arg3 outError:(id*)arg4;
- (id)newObjectOfClass:(Class)arg1 fromData:(id)arg2 ofType:(id)arg3 outError:(id*)arg4;
- (void)registerCoercionFromObjectOfClass:(Class)arg1 toObjectOfClass:(Class)arg2 coercionBlock:(id /* block */)arg3;
- (void)registerCoercionFromObjectOfClass:(Class)arg1 toRepresentationOfType:(id)arg2 coercionBlock:(id /* block */)arg3;
- (void)registerCoercionFromRepresentationConformingToType:(id)arg1 toObjectOfClass:(Class)arg2 coercionBlock:(id /* block */)arg3;
- (void)registerCoercionFromRepresentationConformingToType:(id)arg1 toRepresentationOfType:(id)arg2 coercionBlock:(id /* block */)arg3;
- (void)setMemberQueue:(id)arg1;
- (void)setMember_classCoercionByClass:(id)arg1;
- (void)setMember_exporterByClass:(id)arg1;
- (void)setMember_importerByClass:(id)arg1;
- (void)setMember_representationCoercions:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void)uikit_registerExtraCoercions;

@end

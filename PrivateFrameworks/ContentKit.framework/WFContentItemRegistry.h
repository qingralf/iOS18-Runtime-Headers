/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFContentItemRegistry : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _lock_allItemClasses;
    NSMutableDictionary * _lock_contentItemClassesByType;
}

@property (nonatomic, readonly) NSSet *allOwnedTypes;
@property (nonatomic, readonly) NSSet *contentItemClasses;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) NSMutableSet *lock_allItemClasses;
@property (nonatomic, readonly) NSMutableDictionary *lock_contentItemClassesByType;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)allContentItemClassesInContentKit;
+ (id)inputContentItemClassesMatchingShortcutInputClasses:(id)arg1;
+ (id)sharedRegistry;
+ (id)shortcutInputClassesMatchingInputContentItemsOfClasses:(id)arg1 hostBundleIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)allOwnedTypes;
- (Class)contentItemClassForType:(id)arg1;
- (id)contentItemClasses;
- (id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)arg1;
- (id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2;
- (id)contentItemClassesSupportingType:(id)arg1;
- (id)init;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)lock_allItemClasses;
- (id)lock_contentItemClassesByType;
- (void)lock_registerContentItemClass:(Class)arg1;
- (void)rediscoverContentItemClassesIfNeeded;
- (void)registerContentItemClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)allContentItemClassesInWorkflowKit;

@end

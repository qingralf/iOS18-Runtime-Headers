/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFDataStore : NSObject <AFUIDataStoring> {
    NSMutableDictionary * _entries;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void).cxx_destruct;
- (id)imageDataForKey:(id)arg1;
- (id)init;
- (id)initWithEntries:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)propertyListRepresentation;
- (void)setImageData:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (id)afui_dataStoringShim;
- (id)imageForKey:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;

@end

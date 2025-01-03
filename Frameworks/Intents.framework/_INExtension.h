/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INExtension : NSObject <INIntentHandlerProvidingPrivate, NSExtensionRequestHandling> {
    INExtensionContext * _extensionContext;
}

@property (nonatomic, readonly) INExtensionContext *_extensionContext;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_extensionContext;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)handlerForIntent:(id)arg1;

@end

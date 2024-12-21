/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SCSharingReminders.framework/SCSharingReminders
 */

@interface SCSharingReminderArchiver : NSObject {
    NSFileManager * _fileManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) NSFileManager *fileManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)createSharingReminderDirectory;
- (id)fileManager;
- (id)fileURLForKey:(id)arg1;
- (id)getObjectOfClass:(Class)arg1 atKey:(id)arg2;
- (void)getObjectOfClass:(Class)arg1 atKey:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)setFileManager:(id)arg1;
- (void)setObject:(id)arg1 atKey:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)sharingReminderDirectoryExists;
- (id)sharingReminderDirectoryURL;

@end
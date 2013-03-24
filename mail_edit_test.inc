<?php

/**
 * Implements hook_mailkeys()
 */
function mail_edit_test_mailkeys() {
    return array(
        MAIL_EDIT_TEST_EMAIL_KEY   => t('Send node to provided email addresses'),
    );
}

/**
 * Implements hook_mail_edit_text().
 *
 * @param string $mailkey
 * @param object $language
 *
 * @return array of default unprocessed email template
 */
function mail_edit_test_mail_edit_text($mailkey, $language) {
    $return = array();
    $return['subject'] = _mail_edit_test_text($mailkey . '_subject', $language, array(), FALSE);
    $return['body'] = _mail_edit_test_text($mailkey . '_body', $language, array(), FALSE);
    return $return;
}

/**
 * Implements hook_mail_edit_token_types().
 *
 * @param string $mailkey
 *
 * @return array of available token types for this email template
 */
function mail_edit_test_mail_edit_token_types($mailkey)
{
    return array('node');
}

<div id="node-<?php print $node->nid; ?>" class="team-member node-team <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php
    $member_ship_status = (isset($content['field_membership_status']['#items'][0])) ? $content['field_membership_status']['#items'][0]['value'] : '';
    $link_content =
      '<div class="team-image">' . render($content['field_person_image']) . '</div>' .
      '<div class="team-name">' . $title . '</div>' .
      '<div class="team-position">' . $member_ship_status . '</div>';
  ?>
  <?php print l($link_content, 'node/' . $node->nid, array('html' => TRUE));?>

</div>

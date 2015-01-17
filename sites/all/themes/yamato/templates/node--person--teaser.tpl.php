<div id="node-<?php print $node->nid; ?>" class="team-member node-team <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php
    $link_content =
      '<div class="team-image">' . render($content['field_person_image']) . '</div>' .
      '<div class="team-name">' . $title . '</div>' .
      '<div class="team-position">' . $content['field_membership_status']['#items'][0]['value'] . '</div>';
  ?>
  <?php print l($link_content, 'node/' . $node->nid, array('html' => TRUE));?>

</div>
